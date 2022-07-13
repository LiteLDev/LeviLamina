# 🔍 如何：使用自定义依赖库路径

>通过自定义依赖库目录，可以较好地分类插件所需要的库。以下示例演示如何定义自定义依赖库路径。

<br>

## 使用CustomLibAttribute特性

>只需通过CustomLibAttribute即可完成自定义：

<br>

C#
```cs
[assembly:CustomLib("plugins/libpath1")]
[assembly:CustomLib("libpath2")]
```

>[!TIP]
>
>LL.NET具有默认的依赖库路径，即 `plugins/lib` 。