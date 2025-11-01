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
    MCNAPI explicit EducationOptions(::ResourcePackManager* packMan);

    MCNAPI void init(::LevelData const& levelData);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ServiceReference<::EducationOptions> _getCurrentOptions();

    MCNAPI static bool isChemistryEnabled();

    MCNAPI static bool isCodeBuilderEnabled();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EducationOptions& DEFAULT_OPTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourcePackManager* packMan);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onActiveResourcePacksChanged(::ResourcePackManager& manager);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForResourcePackListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
