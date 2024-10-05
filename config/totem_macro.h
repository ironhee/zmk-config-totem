#pragma once

// Preprocessor mechanism to overload macros, cf. https://stackoverflow.com/a/27051616/6114651
#define VARGS_(_10, _9, _8, _7, _6, _5, _4, _3, _2, _1, N, ...) N
#define VARGS(...) VARGS_(__VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define CONCAT_(a, b) a##b
#define CONCAT(a, b) CONCAT_(a, b)
#define ZMK_HELPER_STRINGIFY(x) #x

/*=====================*/
/* Behavior            */
/*=====================*/
#define ZMK_BEHAVIOR_CORE_caps_word       compatible = "zmk,behavior-caps-word";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_hold_tap        compatible = "zmk,behavior-hold-tap";        #binding-cells = <2>
#define ZMK_BEHAVIOR_CORE_key_repeat      compatible = "zmk,behavior-key-repeat";      #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_mod_morph       compatible = "zmk,behavior-mod-morph";       #binding-cells = <0>
#define ZMK_BEHAVIOR_CORE_sticky_key      compatible = "zmk,behavior-sticky-key";      #binding-cells = <1>
#define ZMK_BEHAVIOR_CORE_tap_dance       compatible = "zmk,behavior-tap-dance";       #binding-cells = <0>
#define ZMK_BEHAVIOR(name, type, ...) \
  / { \
    behaviors { \
      name: name { \
        ZMK_BEHAVIOR_CORE_ ## type; \
        __VA_ARGS__ \
      }; \
    }; \
  };
#define ZMK_CAPS_WORD(name, ...) ZMK_BEHAVIOR(name, caps_word, __VA_ARGS__)
#define ZMK_HOLD_TAP(name, ...) ZMK_BEHAVIOR(name, hold_tap, __VA_ARGS__)
#define ZMK_KEY_REPEAT(name, ...) ZMK_BEHAVIOR(name, key_repeat, __VA_ARGS__)
#define ZMK_MOD_MORPH(name, ...) ZMK_BEHAVIOR(name, mod_morph, __VA_ARGS__)
#define ZMK_STICKY_KEY(name, ...) ZMK_BEHAVIOR(name, sticky_key, __VA_ARGS__)
#define ZMK_TAP_DANCE(name, ...) ZMK_BEHAVIOR(name, tap_dance, __VA_ARGS__)

/*=====================*/
/* Layer               */
/*=====================*/
#define ZMK_LAYER(name, layout) \
  / { \
    keymap { \
      compatible = "zmk,keymap"; \
      layer_ ## name { \
        bindings = <layout>; \
      }; \
    }; \
  };

/*=====================*/
/* Combo               */
/*=====================*/
#define ALL 0xff
#if !defined COMBO_TERM
  #define COMBO_TERM 30
#endif

#define ZMK_COMBO(...) CONCAT(ZMK_COMBO_, VARGS(__VA_ARGS__))(__VA_ARGS__)
#define ZMK_COMBO_3(name, combo_bindings, keypos) \
  ZMK_COMBO_4(name, combo_bindings, keypos, ALL)
#define ZMK_COMBO_4(name, combo_bindings, keypos, combo_layers) \
  ZMK_COMBO_5(name, combo_bindings, keypos, combo_layers, COMBO_TERM)
#define ZMK_COMBO_5(name, combo_bindings, keypos, combo_layers, combo_timeout) \
  ZMK_COMBO_6(name, combo_bindings, keypos, combo_layers, combo_timeout, 0)
#define ZMK_COMBO_6(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle) \
  ZMK_COMBO_7(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle, )
#define ZMK_COMBO_7(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle, combo_vaargs) \
  / { \
    combos { \
      compatible = "zmk,combos"; \
      combo_ ## name { \
        timeout-ms = <combo_timeout>; \
        bindings = <combo_bindings>; \
        key-positions = <keypos>; \
        layers = <combo_layers>; \
        require-prior-idle-ms = <combo_idle>; \
        combo_vaargs \
      }; \
    }; \
  };
