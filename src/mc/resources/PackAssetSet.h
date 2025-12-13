#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PackAssetSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk547e14;
    // NOLINTEND

public:
    // prevent constructor by default
    PackAssetSet& operator=(PackAssetSet const&);
    PackAssetSet(PackAssetSet const&);
    PackAssetSet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackAssetSet() = default;

    virtual void addAsset(::Core::Path, ::std::string) = 0;

    virtual void clear() = 0;

    virtual bool hasAsset(::Core::Path const&, bool) const = 0;

    virtual ::std::string const* const getDecryptionKey(::Core::Path const&, bool) const = 0;

    virtual void forEachAsset(::brstd::function_ref<void(::Core::Path const&)>) const = 0;

    virtual bool isEmpty() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
