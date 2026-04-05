#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
namespace Editor::Prefabs { class PrefabDBTemplate; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabDBServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServiceProvider() = default;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate const> getTemplate(::mce::UUID const& templateId) const = 0;

    virtual ::WeakRef<::Editor::Prefabs::PrefabDBTemplate> getTemplate(::mce::UUID const& templateId) = 0;

    virtual void bake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    ) = 0;

    virtual void unbake(
        ::WeakEntityRef                           weakPlayerRef,
        ::std::function<void(bool)>               completionCallback,
        ::std::function<void(::std::string_view)> logger
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Prefabs
