#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class EditorScriptingFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::EditorScriptingFacet> {
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
    virtual ~EditorScriptingFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EditorScriptingFacet(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& clientInstance);
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
