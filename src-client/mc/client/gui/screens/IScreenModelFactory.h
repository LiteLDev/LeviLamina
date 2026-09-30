#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include <memory>
#include <string>

// auto generated forward declare list
// clang-format off
class AppConfigs;
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class SceneFactory;
struct MinecraftScreenModelContext;
// clang-format on

class IScreenModelFactory {
public:
    // template member functions (manual; the generator cannot emit template instantiations)
    template <class T>
    MCAPI ::std::shared_ptr<T> createModel(::std::string const& screenName, ::SceneFactory& factory);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenModelFactory() = default;

    virtual ::std::optional<::MinecraftScreenModelContext>
    createModelContext(::std::string const& screenName, ::SceneFactory& factory) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::IScreenModelFactory> create(
        ::IMinecraftGame&           game,
        ::IClientInstance&          client,
        ::IAdvancedGraphicsOptions& graphics,
        ::AppConfigs&               config
    );
    // NOLINTEND
};
