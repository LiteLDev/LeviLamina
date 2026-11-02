#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/editor/IHotbarElementPayloadHandler.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct SerializableProbabilityHotbarElement; }
namespace Editor { struct SerializableSimpleHotbarElement; }
namespace Editor::Network { class HotbarCollectionHotbarElementDisplayNameChangedPayload; }
// clang-format on

namespace Editor {

class HotbarElementBase : public ::Editor::IHotbarElementPayloadHandler,
                          public ::EnableGetWeakRef<::Editor::HotbarElementBase> {
public:
    // HotbarElementBase inner types define
    enum class HotbarElementType : int {
        Simple      = 0,
        Probability = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb26255;
    ::ll::UntypedStorage<8, 40> mUnk2066ee;
    ::ll::UntypedStorage<8, 24> mUnk52284a;
    ::ll::UntypedStorage<8, 48> mUnk9a9f38;
    ::ll::UntypedStorage<8, 8>  mUnk4a0a16;
    // NOLINTEND

public:
    // prevent constructor by default
    HotbarElementBase& operator=(HotbarElementBase const&);
    HotbarElementBase(HotbarElementBase const&);
    HotbarElementBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HotbarElementBase() = default;

    virtual ::Editor::HotbarElementBase::HotbarElementType getHotbarElementType() const = 0;

    virtual ::std::variant<::Editor::SerializableSimpleHotbarElement, ::Editor::SerializableProbabilityHotbarElement>
    baseSnapshotFrom() const = 0;

    virtual void removeDisallowedIds() = 0;

    virtual bool operator==(::Editor::HotbarElementBase const&) const;

    virtual void _handleHotbarCollectionHotbarElementDisplayNameChangedPayload(
        ::Editor::Network::HotbarCollectionHotbarElementDisplayNameChangedPayload const&
    ) /*override*/;
    // NOLINTEND
};

} // namespace Editor
