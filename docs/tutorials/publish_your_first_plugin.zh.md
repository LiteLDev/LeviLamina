# 发布你的第一个插件

在教程[创建你的第一个插件](create_your_first_plugin.md)中，我们创建了一个简单的插件。在本教程中，我们将学习如何发布插件。

### 前置条件

首先，你应当确保你安装了[lip](https://github.com/lippkg/lip)。

你还应当按照[创建你的第一个插件](create_your_first_plugin.md)中的步骤创建了一个插件，其中插件导出目录有类似如下的结构：

```
.
└── plugin-name
    ├── manifest.json
    ├── plugin-name.dll
    └── plugin-name.pdb
```

其中，`plugin-name`是插件名。

### 创建一个GitHub仓库

首先，你需要创建一个GitHub仓库，用于存放你的插件。你可以使用任何你喜欢的名称，例如`plugin-name`。

在仓库中，我们建议放一个`README.md`文件，用于描述插件；并放一个`logo.png`文件，用于作为插件的图标。

### 创建一个tooth.json

在插件导出目录中创建一个`tooth.json`文件，内容如下：

```json
{
    "format_version": 2,
    "tooth": "github.com/my-github-username/plugin-name",
    "version": "0.1.0",
    "info": {
        "name": "MyPlugin",
        "description": "MyPlugin is a great plugin!",
        "source": "github.com/my-github-username/my-source-code",
        "author": "My Name",
        "tags": [
            "plugin",
            "ll"
        ]
    },
    "dependencies": {
        "github.com/tooth-hub/another-plugin": "2.0.x"
    },
    "prerequisites": {
        "github.com/LiteLDev/LeviLamina": "1.0.x"
    },
    "files": {
        "place": [
            {
                "src": "plugin-name/*",
                "dest": "plugins/plugin-name"
            }
        ]
    }
}
```

替换`tooth`字段的值为你的插件的GitHub仓库地址，替换`version`字段的值为你的插件的版本号，填写`info`中各个字段的值，填写`dependencies`和`prerequisites`中各个字段的值。

!!! note
    `dependencies`在安装插件时，会自动安装依赖的插件，在卸载插件时，会自动卸载依赖的插件。但是`prerequisites`不会自动安装，而是在缺少依赖时报错。一般来说，`prerequisites`中的插件应当是一些基础性的、框架级别的包，例如`github.com/LiteLDev/LeviLamina`，以避免插件的卸载过程中误卸载了这些包。

更多关于`tooth.json`的信息，请参考<https://docs.lippkg.com/zh/reference/tooth_json_file_reference/>。

### 尝试打包和安装插件

在插件导出目录中运行`lip tooth pack plugin.tth`，将会在当前目录下生成一个`plugin.tth`文件，这是一个打包好的插件。你可以移动这个插件到合适的地方，并使用`lip install plugin.tth`尝试安装这个插件。

### 发布插件

将更改提交到GitHub仓库，然后在GitHub仓库中点击`Releases`，点击`Create a new release`，填写`Tag version`和`Release title`，然后点击`Publish release`，即可发布插件。注意对应的tag必须为类似`v0.1.0`的格式，也就是`tooth.json`中`version`字段的值加上一个`v`。

然后你就可以通过`lip install github.com/my-github-username/plugin-name`来安装你的插件了。由于版本列表同步延迟，这个命令可能会在刚发布的一段时间内报错，你可以指定版本号来安装插件，例如`lip install github.com/my-github-username/plugin-name@0.1.0`。

在一段时间后，你也可以在LipUI和<www.lippkg.com>查看到你的插件了。
