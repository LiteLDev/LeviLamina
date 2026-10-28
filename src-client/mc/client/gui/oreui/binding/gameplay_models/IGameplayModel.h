#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class GameplayModelBinder; }
// clang-format on

namespace OreUI::Experimental::Detail {

class IGameplayModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameplayModel() = default;

    virtual void update(double) = 0;

    virtual bool isCreated() const = 0;

    virtual ::std::string_view name() const = 0;

    virtual void create(::OreUI::Experimental::Detail::GameplayModelBinder const& binder) = 0;

    virtual void destroy() = 0;
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
