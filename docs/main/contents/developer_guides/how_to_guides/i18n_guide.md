# I18N Guide

## Introduction

LeviLamina provides a simple i18n class to support multilingual functionality for itself and mods.

## Usage

### Loading Language Files

- Include the header file `ll/api/i18n/I18n.h`.
- Call the `I18n::load` method in the `load` method of your mod, passing the path to the language files. This path is
  typically a folder but can also be a single JSON file. LeviLamina provides the `Mod::getLangDir` method for developers
  to obtain the standard language file path.

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

Example language file path:

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

Example language file content:

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

### Using I18N to Translate Text

- Include the header file `ll/api/i18n/I18n.h`.
- Use the directive `using namespace ll::i18n_literals` in your source file.
- Append the `_tr()` literal to strings for translation.

```cpp
#include "ll/api/i18n/I18n.h"

using namespace ll::i18n_literals;

void MyMod::enable() {
    getSelf().getLogger().info("Hello, world!"_tr());
    getSelf().getLogger().info("This is a text with parameter: {0}"_tr("parameter"));
    return true;
}
```