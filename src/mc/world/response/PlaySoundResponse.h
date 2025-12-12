#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/response/EventResponse.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct EventResponseCollection;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PlaySoundResponse : public ::EventResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9264b9;
    ::ll::UntypedStorage<2, 2>  mUnkb10826;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundResponse& operator=(PlaySoundResponse const&);
    PlaySoundResponse(PlaySoundResponse const&);
    PlaySoundResponse();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void executeAction(::RenderParams& params) const /*override*/;

    virtual void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>& schema,
        ::Factory<::EventResponse> const&                                                                       factory
    ) const /*override*/;

    virtual ~PlaySoundResponse() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $executeAction(::RenderParams& params) const;

    MCNAPI void $buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::EventResponseCollection>>& schema,
        ::Factory<::EventResponse> const&                                                                       factory
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
