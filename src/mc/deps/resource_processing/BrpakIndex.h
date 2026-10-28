#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources { struct BrpakIndexEntry; }
namespace Core { class File; }
namespace Core { class PathView; }
// clang-format on

namespace Bedrock::Resources {

class BrpakIndex {
public:
    // BrpakIndex inner types declare
    // clang-format off
    struct CaseInsensitiveLess;
    // clang-format on

    // BrpakIndex inner types define
    struct CaseInsensitiveLess {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf4d226;
    ::ll::UntypedStorage<8, 32> mUnkb6c8a4;
    // NOLINTEND

public:
    // prevent constructor by default
    BrpakIndex& operator=(BrpakIndex const&);
    BrpakIndex(BrpakIndex const&);
    BrpakIndex();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrpakIndex(
        ::std::map<
            ::std::string,
            ::Bedrock::Resources::BrpakIndexEntry,
            ::Bedrock::Resources::BrpakIndex::CaseInsensitiveLess> index,
        ::std::string                                              archivePath
    );

    MCNAPI ::Bedrock::Resources::BrpakIndexEntry const* findEntry(::std::string_view entryName) const;

    MCNAPI void forEachInPrefix(
        ::std::string_view                                                                              prefix,
        ::brstd::function_ref<void(::std::string const&, ::Bedrock::Resources::BrpakIndexEntry const&)> callback
    ) const;

    MCNAPI ::Bedrock::Result<void> readEntryData(
        ::Bedrock::Resources::BrpakIndexEntry const& entry,
        ::std::string&                               result,
        ::Core::File&                                fileHandle,
        bool                                         validateCrc
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::Bedrock::Resources::BrpakIndex> buildFromFile(::Core::PathView brpakPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::map<
            ::std::string,
            ::Bedrock::Resources::BrpakIndexEntry,
            ::Bedrock::Resources::BrpakIndex::CaseInsensitiveLess> index,
        ::std::string                                              archivePath
    );
    // NOLINTEND
};

} // namespace Bedrock::Resources
