#pragma once

#include <cstddef>
#include <functional>
#include <memory>
#include <mutex>
#include <string>
#include <string_view>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/coro/Generator.h"
#include "ll/api/mod/Manifest.h"
#include "ll/api/mod/Mod.h"


namespace ll::mod {
class ModManagerRegistry;
class ModManager {
    friend ModManagerRegistry;
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLNDAPI std::string const& getType() const;

    LLNDAPI bool hasMod(std::string_view name) const;

    LLNDAPI std::shared_ptr<Mod> getMod(std::string_view name) const;

    LLNDAPI size_t getModCount() const;

    [[deprecated]] LLAPI void forEachMod(std::function<bool(std::string_view name, Mod&)> const& fn);

    LLNDAPI coro::Generator<Mod&> mods() const;

protected:
    LLNDAPI std::lock_guard<std::recursive_mutex> lock() const;

    LLNDAPI explicit ModManager(std::string_view type);

    LLAPI virtual ~ModManager();

    LLAPI void addMod(std::string_view name, std::shared_ptr<Mod> const& mod);

    LLAPI void eraseMod(std::string_view name);

    virtual Expected<> load(Manifest manifest) = 0;

    virtual Expected<> unload(std::string_view name) = 0;

    LLAPI virtual Expected<> enable(std::string_view name);

    LLAPI virtual Expected<> disable(std::string_view name);
};
} // namespace ll::mod
