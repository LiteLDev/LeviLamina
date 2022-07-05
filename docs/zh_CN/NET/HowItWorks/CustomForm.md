# ⛓ 它是如何工作的：自定义表单底层相关

>CustomForm实例中含有一个 `List<Pair<String, CustomFormElement>>` 字段。在未将表单发送至玩家前，其基类 `ClassTemplate<...>` 中的 `nativePtr` 字段将一直为 `nullptr` 。
>
>同时，CustomForm实例中具有一个布尔值字段 `isFormGenerated`。当调用SendTo将表单发送至玩家时，内部会调用 `GenerateNativeForm` 方法以生成本机表单并使其基类 `ClassTemplate<...>` 中的 `nativePtr` 字段持有其指针并将 `isFormGenerated` 设置为 `true`，在这之后调用底层cpp方法将表单发送至玩家。
>
>一旦生成本机表单，只要不对表单进行修改操作，就不会再重复生成表单，以此提高效率。
>
>调用 `CustomForm.Append` 方法或设置 `CustomForm.Elements` 属性会导致 `isFormGenerated`被重置为 `false`。在下一次调用 `SendTo` 时，若检测到 `isFormGenerated` 为 `false` 则会尝试重新生成表单。
>
>所以，频繁地添加或更改表单内部的控件可能会导致性能问题。因此建议表单在构建完成以后不再作修改，方能达到较高效率。

