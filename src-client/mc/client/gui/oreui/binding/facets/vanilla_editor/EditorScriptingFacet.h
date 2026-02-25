#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/editor/datastore/EventType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IClientInstance;
namespace Editor::DataStore { struct PayloadDescription; }
namespace Json { class Value; }
// clang-format on

namespace OreUI {

class EditorScriptingFacet : public ::OreUI::FacetBase<::OreUI::EditorScriptingFacet> {
public:
    // EditorScriptingFacet inner types declare
    // clang-format off
    class EditorRay;
    // clang-format on

    // EditorScriptingFacet inner types define
    class EditorRay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mLocation;
        ::ll::TypedStorage<4, 12, ::Vec3> mDirection;
        ::ll::TypedStorage<4, 12, ::Vec3> mCursorBlockLocation;
        ::ll::TypedStorage<1, 1, bool>    mRayHit;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                  mDataStoreEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>           mCleanupMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorScriptingFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorScriptingFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorScriptingFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance);

    MCAPI void _handleDataStoreEvent(
        ::HashedString const&          dataTag,
        ::Editor::DataStore::EventType eventType,
        ::Json::Value const&           payload,
        ::Editor::DataStore::PayloadDescription const&
    );

    MCAPI void addCleanupMessage(::std::string const& id, ::std::string const& payload);

    MCAPI void attachDebugger();

    MCAPI void dispatchDataStoreEvent(
        ::std::string const&                                     dataTag,
        ::Editor::DataStore::EventType                           eventType,
        ::std::optional<::std::string>                           payload,
        ::std::optional<::Editor::DataStore::PayloadDescription> desc
    );

    MCAPI ::OreUI::EditorScriptingFacet::EditorRay getMouseRayCastActionPayload() const;

    MCAPI void reload();

    MCAPI void sendMessage(::std::string const& id, ::std::string const& payload);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
