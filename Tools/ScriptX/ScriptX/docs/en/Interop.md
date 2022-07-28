# Interoperate with native engine API

ScriptX provides some basic interfaces to interoperate with native engine APIs.
These basic interfaces appear in the form of auxiliary classes.

such as:
1. `V8` -> `script::v8_interop`
2. `JavaScriptCore` -> `script::jsc_interop`
3. `Lua` -> `script::lua_interop`

Mainly provide capabilities:
1. Get the internal native engine instance from the engine pointer
2. Conversion of `script::Local` reference and native reference type
3. Conversion of `script::Arguments` and native call parameters

These `xx_interop` auxiliary classes will only appear when the corresponding backend is selected at compile time, so macro isolation is required when calling related APIs.

See [InteroperateTest](../../test/src/InteroperateTest.cc) for details

ScriptX positions itself as a helper to help you call the native engine API, but when the helper is weak (the ability is not exposed), you can do it yourself at any time!