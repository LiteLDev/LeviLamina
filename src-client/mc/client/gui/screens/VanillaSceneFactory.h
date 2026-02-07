#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct IUIDefRepository;
namespace Json { class Value; }
// clang-format on

class VanillaSceneFactory : public ::SceneFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaSceneFactory() /*override*/ = default;

    virtual ::Json::Value createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Json::Value $createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
