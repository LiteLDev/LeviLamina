# LLNET.Core 命名空间

包含用于定义常用引用类型、接口、特性和处理异常的基础类和基类。

<br>

## 类

|||
|-|-|
|[DynamicCommandInvalidCastException](Class/DynamicCommandInvalidCastException/DynamicCommandInvalidCastException.md)|表示在**动态指令执行时转换类型**的过程中发生的一个或多个错误。|
|[HookFailedException](Class/HookFailedException/HookFailedException.md)|表示在**挂载BDS钩子**的过程中发生的一个或多个错误。|
|[InvalidRemoteCallTypeException](Class/InvalidRemoteCallTypeException/InvalidRemoteCallTypeException.md)|**注册远程调用函数时检测到不可导出或不受支持的类型**引发的异常。
|[LibPathAttribute](Class/LibPathAttribute/LibPathAttribute.md)|指示LL.NET将会搜索的插件所依赖的库目录路径。|
|[LiteLoaderDotNETException](Class/LiteLoaderDotNETException/LiteLoaderDotNETException.md)|作为LL.NET一切异常的基类。|
|[LLNETLibraryAttribute]|暂未实现功能。|
|[MCException](Class/MCException/MCException.md)|检测到 [BDS](https://www.minecraft.net/en-us/download/server/bedrock) 发生的错误而引发的异常基类。|
|[NativePluginException](Class/NativePluginException/NativePluginException.md)|尝试对非.NET插件对象调用Plugin.GetPluginAssembly时引发的异常|
|[PluginMainAttribute](Class/PluginMainAttribute/PluginMainAttribute.md)|指示由自定义插件入口加载的插件的入口类。|
|[RegisterCommandException](Class/RegisterCommandException/RegisterCommandException.md)|表示在**注册指令**的过程中发生的一个或多个错误。|
|[RemoteCallExportFunctionException](Class/RemoteCallExportFunctionException/RemoteCallExportFunctionException.md)|表示在**执行动态远程调用的导出函数中**的过程中发生的一个或多个错误。|
|[RemoteCallImportFunctionException](Class/RemoteCallImportFunctionException/RemoteCallImportFunctionException.md)|表示在**执行动态远程调用的导入函数中**的过程中发生的一个或多个错误。|

<br>

## 结构
|||
|-|-|
|[Pair\<Tkey,TValue\>](Struct/Pair/Pair.md)|[System.Collections.Generic.KeyValuePair\<Tkey,TValue\>](https://docs.microsoft.com/zh-cn/dotnet/api/system.collections.generic.keyvaluepair?view=net-6.0)的替代品。|
|[SecondaryRankPtr](Struct/SecondaryRankPtr/SecondaryRankPtr.md)|用于表示二级指针的结构。|

<br>

## 接口
|||
|-|-|
|[IPluginInitializer](Interface/IPluginInitializer/IPluginInitializer.md)|作为自定义插件入口的基础接口。|