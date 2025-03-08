# 发布你的第一个整合包

首先，你应当确保你安装了[lip](https://lip.levimc.org)。

## 创建一个仓库

然后，你需要创建一个GitHub仓库，用于存放你的整合包。你可以使用任何你喜欢的名称，例如`my-pack`。

在仓库中，我们建议放一个`README.md`文件，用于描述整合包；并放一个`logo.png`文件，用于作为整合包的图标。

### 创建一个tooth.json

在整合包导出目录中创建一个`tooth.json`文件，内容如下：

```json
{
  "format_version": 3,
  "format_uuid": "289f771f-2c9a-4d73-9f3f-8492495a924d",
  "tooth": "example.com/my-user/my-pack",
  "version": "0.1.0",
  "info": {
    "name": "My Pack",
    "description": "Description of my pack",
    "tags": [
      "pack"
    ],
    "avatar_url": "https://example.com/my-pack/avatar.png"
  },
  "variants": [
    {
      "dependencies": {
        "github.com/LiteLDev/LeviLamina": "Required LeviLamina version range"
      },
      "assets": [
        {
          "type": "self",
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

替换`tooth`字段的值为GitHub仓库地址，替换`version`字段的值为版本号，填写`info`中各个字段的值。

在`dependencies`中填写LeviLamina和要整合的一切包。

更多关于`tooth.json`的信息，请参考<https://lip.levimc.org/zh/user-guide/files/tooth-json/>。

### 尝试打包和安装整合包

运行`lip pack pack.zip`，将会在当前目录下生成一个`pack.zip`文件，这是一个打包好的整合包。你可以移动这个整合包到合适的地方，并使用`lip install pack.zip`尝试安装这个整合包。

### 发布整合包

将更改提交到GitHub仓库，然后在GitHub仓库中点击`Releases`，点击`Create a new release`，填写`Tag version`和`Release title`，然后点击`Publish release`，即可发布整合包。注意对应的tag必须为类似`v0.1.0`的格式，也就是`tooth.json`中`version`字段的值加上一个`v`。

然后你就可以通过`lip install github.com/my-github-username/pack-name`来安装你的整合包了。由于版本列表同步延迟，这个命令可能会在刚发布的一段时间内报错，你可以指定版本号来安装整合包，例如`lip install github.com/my-github-username/pack-name@0.1.0`。

在一段时间后，你也可以在<bedrinth.com>查看到你的整合包了。
