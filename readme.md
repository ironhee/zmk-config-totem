# Totem keyboard zmk config

![keymap image](./totem.svg)

## Generate Keymap Image

```sh
keymap -c keymap_drawer.config.yaml parse -z config/totem.keymap > totem.yaml
keymap -c keymap_drawer.config.yaml draw -j config/info.json totem.yaml > totem.svg
```
