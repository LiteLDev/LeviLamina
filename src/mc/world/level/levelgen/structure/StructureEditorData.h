#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DataLoadHelper;
// clang-format on

class StructureEditorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mStructureName;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDataField;
    ::ll::TypedStorage<1, 1, bool>                                 mIncludePlayers;
    ::ll::TypedStorage<1, 1, bool>                                 mShowBoundingBox;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode>          mRedstoneSaveMode;
    ::ll::TypedStorage<4, 4, ::StructureBlockType>                 mType;
    ::ll::TypedStorage<8, 104, ::StructureSettings>                mSettings;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);
    StructureEditorData();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    StructureEditorData& operator=(StructureEditorData const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StructureEditorData();
#endif

    MCNAPI StructureEditorData(::StructureEditorData&&);

    MCNAPI StructureEditorData(::StructureEditorData const&);

    MCNAPI void load(::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::StructureEditorData& operator=(::StructureEditorData&&);

    MCNAPI bool operator==(::StructureEditorData const& rhs) const;

    MCNAPI void save(::CompoundTag& tag) const;

    MCNAPI void setFilteredStructureName(::std::string const& filteredName);

    MCNAPI ~StructureEditorData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::string const& DEFAULT_EXPORT_NAME();
#endif

    MCNAPI static ::std::string const& DEFAULT_STRUCTURE_NAMESPACE();

    MCNAPI static ::std::string const& NAME_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif

    MCNAPI void* $ctor(::StructureEditorData&&);

    MCNAPI void* $ctor(::StructureEditorData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
