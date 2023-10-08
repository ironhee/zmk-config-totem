# Totem keyboard zmk config

![keymap image](/docs/totem.svg)

## Generate Keymap Image

```sh
keymap -c keymap_drawer.config.yaml parse -z config/totem.keymap > docs/totem.yaml
keymap -c keymap_drawer.config.yaml draw -j config/info.json docs/totem.yaml > docs/totem.svg
```
