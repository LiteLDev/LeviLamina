#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/StructureData.h"

// auto generated forward declare list
// clang-format off
struct PackIdVersion;
// clang-format on

namespace Editor {

struct EditorBPStructureData : public ::Editor::StructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkb246e1;
    ::ll::UntypedStorage<8, 32> mUnk261968;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorBPStructureData& operator=(EditorBPStructureData const&);
    EditorBPStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorBPStructureData(::Editor::EditorBPStructureData const&);

    MCNAPI EditorBPStructureData(
        ::std::string const& strucNamespace,
        ::std::string const& name,
        ::PackIdVersion      idVersion,
        ::std::string const& path
    );

    MCNAPI ~EditorBPStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::EditorBPStructureData const&);

    MCNAPI void* $ctor(
        ::std::string const& strucNamespace,
        ::std::string const& name,
        ::PackIdVersion      idVersion,
        ::std::string const& path
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
