#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace cereal { class DynamicValue; }
namespace cereal { class SerializerContext; }
// clang-format on

struct BlockComponentGroupDescription {
public:
    // BlockComponentGroupDescription inner types declare
    // clang-format off
    struct Components;
    // clang-format on

    // BlockComponentGroupDescription inner types define
    struct Components {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnka139a3;
        // NOLINTEND

    public:
        // prevent constructor by default
        Components(Components const&);
        Components();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _setCustomComponent(
            ::std::string_view                               compName,
            ::std::shared_ptr<::cereal::DynamicValue> const& compData,
            bool                                             overridePlayerInteract,
            bool                                             overridePlayerPlacing
        );

        MCNAPI ::std::shared_ptr<::cereal::DynamicValue> getCustomComponent(::cereal::SerializerContext const& context
        ) const;

        MCNAPI ::BlockComponentGroupDescription::Components&
        operator=(::BlockComponentGroupDescription::Components const&);

        MCNAPI ~Components();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke08dc0;
    ::ll::UntypedStorage<8, 24> mUnkd8d4e6;
    ::ll::UntypedStorage<8, 24> mUnkd642d2;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentGroupDescription& operator=(BlockComponentGroupDescription const&);
    BlockComponentGroupDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockComponentGroupDescription(::BlockComponentGroupDescription&&);

    MCNAPI BlockComponentGroupDescription(::BlockComponentGroupDescription const&);

    MCNAPI void addComponentDescription(::std::shared_ptr<::BlockComponentDescription> desc);

    MCNAPI void foreachDescription(::std::function<void(::BlockComponentDescription const&)> callback) const;

    MCNAPI ::BlockComponentGroupDescription& operator=(::BlockComponentGroupDescription&&);

    MCNAPI ~BlockComponentGroupDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockComponentGroupDescription&&);

    MCNAPI void* $ctor(::BlockComponentGroupDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
