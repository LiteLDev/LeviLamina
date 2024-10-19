#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/mod/ModManagerRegistry.h"

namespace ll::mod {

enum class ModNames;

constexpr inline std::string_view modsEnumName = command::enum_name_v<ModNames>;

class ModRegistrar {
    struct Impl;

    std::unique_ptr<Impl> impl;

    ModRegistrar();
    ~ModRegistrar();

public:
    static ModRegistrar& getInstance();

    [[nodiscard]] std::vector<std::string> getSortedModNames() const;

    void loadAllMods() noexcept;

    void enableAllMods() noexcept;

    void disableAllMods() noexcept;

    void releaseAllMods() noexcept;

    Expected<> loadMod(std::string_view name) noexcept;

    Expected<> unloadMod(std::string_view name) noexcept;

    Expected<> enableMod(std::string_view name) noexcept;

    Expected<> disableMod(std::string_view name) noexcept;
};

} // namespace ll::mod
