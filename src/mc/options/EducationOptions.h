#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/resources/ResourcePackListener.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class ResourcePackManager;
// clang-format on

class EducationOptions : public ::Bedrock::EnableNonOwnerReferences, public ::ResourcePackListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkecbd05;
    ::ll::UntypedStorage<1, 1> mUnke6a413;
    ::ll::UntypedStorage<8, 8> mUnk3e959f;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationOptions& operator=(EducationOptions const&);
    EducationOptions(EducationOptions const&);
    EducationOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EducationOptions() /*override*/;

    // vIndex: 1
    virtual void onActiveResourcePacksChanged(::ResourcePackManager& manager) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EducationOptions(::ResourcePackManager* packMan);

    MCAPI void init(::LevelData const& levelData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ServiceReference<::EducationOptions> _getCurrentOptions();

    MCFOLD static bool isChemistryEnabled();

    MCAPI static bool isCodeBuilderEnabled();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::EducationOptions& DEFAULT_OPTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourcePackManager* packMan);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onActiveResourcePacksChanged(::ResourcePackManager& manager);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForResourcePackListener();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
