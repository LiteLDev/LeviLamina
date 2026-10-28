#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/AnimatedButtonResourceObject.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
struct MessageData;
namespace OreUI { class GameDependencies; }
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class AnimatedButtonQuery : public ::OreUI::QueryBase<::OreUI::AnimatedButtonQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                             mAvailable;
    ::ll::TypedStorage<8, 1440, ::OreUI::AnimatedButtonResourceObject>                    mResource;
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&>                                   mPlayerMessagingService;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mResourceKey;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mLoadedMessageId;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mLoadedMessageInstanceId;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedButtonQuery& operator=(AnimatedButtonQuery const&);
    AnimatedButtonQuery(AnimatedButtonQuery const&);
    AnimatedButtonQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimatedButtonQuery(::OreUI::GameDependencies const& game, ::std::string const& resourceKey);

    MCAPI ::std::string _getImageUrl(::MessageData const& message, ::std::string const& imageId) const;

    MCAPI void _refresh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string const& resourceKey);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
