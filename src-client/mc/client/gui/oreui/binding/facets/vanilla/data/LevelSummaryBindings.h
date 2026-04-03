#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct LevelSummaryBindings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> mWorldIconPathString;
    ::ll::TypedStorage<8, 32, ::std::string>          mFileSizeString;
    ::ll::TypedStorage<8, 32, ::std::string>          mLastSavedString;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSummaryBindings& operator=(LevelSummaryBindings const&);
    LevelSummaryBindings(LevelSummaryBindings const&);
    LevelSummaryBindings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSummaryBindings(
        ::LevelSummary const&                                      levelSummary,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::OreUI::LevelSummaryBindings& operator=(::OreUI::LevelSummaryBindings&&);

    MCAPI ~LevelSummaryBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LevelSummary const&                                      levelSummary,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
