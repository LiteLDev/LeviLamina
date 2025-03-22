# 发布你的第一个模组

在教程[创建你的第一个模组](create_your_first_mod.md)中，我们创建了一个简单的模组。在本教程中，我们将学习如何发布模组。

### 前置条件

首先，你应当确保你安装了[lip](https://lip.levimc.org)。

你还应当按照[创建你的第一个模组](create_your_first_mod.md)中的步骤创建了一个模组，其中模组导出目录有类似如下的结构：

```
.
└── mod-name
    ├── manifest.json
    ├── mod-name.dll
    └── mod-name.pdb
```

其中，`mod-name`是模组名。

### 创建一个GitHub仓库

首先，你需要创建一个GitHub仓库，用于存放你的模组。你可以使用任何你喜欢的名称，例如`mod-name`。

在仓库中，我们建议放一个`README.md`文件，用于描述模组；并放一个`logo.png`文件，用于作为模组的图标。

### 创建一个tooth.json

在模组导出目录中创建一个`tooth.json`文件，内容如下：

```json
{
  "format_version": 3,
  "format_uuid": "289f771f-2c9a-4d73-9f3f-8492495a924d",
  "tooth": "example.com/my-user/my-mod",
  "version": "0.0.0",
  "info": {
    "name": "My Mod",
    "description": "Description of my mod",
    "tags": [
      "platform:levilamina",
      "type:mod"
    ],
    "avatar_url": "https://example.com/my-mod/avatar.png"
  },
  "variants": [
    {
      "platform": "win-x64",
      "dependencies": {
        "github.com/LiteLDev/LeviLamina": "Required LeviLamina version range"
      },
      "assets": [
        {
          "type": "zip",
          "urls": [
            "https://example.com/my-mod/assets.zip"
          ],
          "placements": [
            {
              "type": "dir",
              "src": "my-mod/",
              "dest": "plugins/my-mod/"
            }
          ]
        }
      ]
    }
  ]
}
```

替换`tooth`字段的值为你的模组的GitHub仓库地址，替换`version`字段的值为你的模组的版本号，填写`info`中各个字段的值，填写`dependencies`中各个字段的值。

更多关于`tooth.json`的信息，请参考<https://lip.levimc.org/zh/user-guide/files/tooth-json/>。

### 尝试打包和安装模组

在模组导出目录中运行`lip pack mod.zip`，将会在当前目录下生成一个`mod.zip`文件，这是一个打包好的模组。你可以移动这个模组到合适的地方，并使用`lip install mod.zip`尝试安装这个模组。

### 发布模组

将更改提交到GitHub仓库，然后在GitHub仓库中点击`Releases`，点击`Create a new release`，填写`Tag version`和`Release title`，然后点击`Publish release`，即可发布模组。注意对应的tag必须为类似`v0.1.0`的格式，也就是`tooth.json`中`version`字段的值加上一个`v`。

然后你就可以通过`lip install github.com/my-github-username/mod-name`来安装你的模组了。由于版本列表同步延迟，这个命令可能会在刚发布的一段时间内报错，你可以指定版本号来安装模组，例如`lip install github.com/my-github-username/mod-name@0.1.0`。

在一段时间后，你也可以在<bedrinth.com>查看到你的模组了。
