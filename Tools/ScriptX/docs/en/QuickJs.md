# QuickJs engine

Current support QuickJs version is 2021-03-27.

Other version should be also supported.

## Event Loop

QuickJs uses `JS_ExecutePendingJob` to execute promise-related asynchronous events, and ScriptX provides the MessageQueue mechanism.
Therefore, ScriptX will automatically post events at the right time to drive the execution of `JS_ExecutePendingJob`.

## The Patch

QuickJs's C-API is limited, so ScriptX has workaround it mostly be using JS functions.

But some of them are not available in JS, like WeakRef. In such case you may want to apply a patch file provided by ScriptX in [backend/QuickJs/patch](../../backend/QuickJs/patch), or just use the [fork](https://github.com/LanderlYoung/quickjs/tree/58ac957eee57e301ed0cc52b5de5495a7e1c1827) by the author.

Currently the patch is only needed when you need the `script::Weak<T>` to work as expected. Otherwise the `script::Weak<T>` would behave like `script::Global<T>`.