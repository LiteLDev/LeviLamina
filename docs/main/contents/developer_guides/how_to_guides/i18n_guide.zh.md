# I18N指南

## 介绍

LeviLamina提供了一个简单的i18n类，用于为自身和Mod提供多语言支持。

## 使用

### 加载语言文件

- 引用头文件`ll/api/i18n/I18n.h`。
- 在Mod的`load`方法中调用`ll::i18n::getInstance().load`方法，传入语言文件所在路径，一般为文件夹，也可以使用单个json文件。LeviLamina提供了
  `Mod::getLangDir`方法供开发者获取规范的语言文件路径。

```cpp
#include "ll/api/i18n/I18n.h"

bool MyMod::load() {
    if (auto res = ll::i18n::getInstance().load(getSelf().getLangDir()); !res) {
        getLogger().error("i18n load failed");
        res.error().log(getLogger());
    }
    return true;
}
```

语言文件路径示例:

- lang/
  - de.json
  - en.json
  - fr.json
  - id.json
  - it.json
  - ja.json
  - ko.json
  - pt_BR.json
  - ru.json
  - th.json
  - tr.json
  - vi.json
  - zh_CN.json
  - zh_TW.json

语言文件内容示例:

```json
{
  "The mod cannot be loaded": "无法加载该模组",
  "The mod cannot be unloaded": "无法卸载该模组",
  "The mod cannot be enabled": "无法启用该模组",
  "The mod cannot be disabled": "无法禁用该模组",
  "Mod {0} already loaded": "{0} 已加载",
  "Unrecognized mod type: {0}": "无法识别的模组类型：{0}",
  "Mod {0} not found": "找不到模组 {0}",
  "crash the server": "崩溃服务器",
  "Query memory stats": "查询内存统计"
}
```

### 使用I18N来翻译文本

- 引用头文件`ll/api/i18n/I18n.h`。
- 在源文件中使用`using namespace ll::i18n_literals`指令。
- 在字符串后使用`_tr()`字面量。

```cpp
#include "ll/api/i18n/I18n.h"

using namespace ll::i18n_literals;

void MyMod::enable() {
    getSelf().getLogger().info("Hello, world!"_tr());
    getSelf().getLogger().info("This is a text with parameter: {0}"_tr("parameter"));
    return true;
}
```