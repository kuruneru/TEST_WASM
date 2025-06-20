#include <emscripten/emscripten.h>

int main() {
  EM_ASM({
    document.body.innerHTML = 'Hello from WASM!';
  });
  return 0;
}
