# web assembly example

### file creation

```
emcc [filepath] -s WASM=1 -o [outputname.html]
```

### To compile file using embind, we invoke emcc with the bind option:

```
emcc -lembind -o [filename].js [filename].cpp
```

### server start

```
python3 -m http.server 8080
```
