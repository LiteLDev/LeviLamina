#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class HandleCache {
public:
    // HandleCache inner types declare
    // clang-format off
    struct CacheLookupData;
    // clang-format on

    // HandleCache inner types define
    struct CacheLookupData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnke261b1;
        ::ll::UntypedStorage<8, 8> mUnka32892;
        // NOLINTEND

    public:
        // prevent constructor by default
        CacheLookupData& operator=(CacheLookupData const&);
        CacheLookupData(CacheLookupData const&);
        CacheLookupData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8ba42a;
    ::ll::UntypedStorage<8, 64> mUnk98778d;
    // NOLINTEND

public:
    // prevent constructor by default
    HandleCache& operator=(HandleCache const&);
    HandleCache(HandleCache const&);
    HandleCache();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _add(uint64 typeHash, uint64 keyHash, ::Scripting::ObjectHandle const& handle);

    MCAPI void _remove(uint64 typeHash, uint64 keyHash);

    MCAPI ::std::optional<::Scripting::ObjectHandle> _tryGetHandle(uint64 typeHash, uint64 keyHash) const;

    MCAPI void remove(::Scripting::ObjectHandle const& handle);

    MCAPI ~HandleCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
