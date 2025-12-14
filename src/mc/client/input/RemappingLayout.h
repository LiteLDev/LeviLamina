#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/IconSize.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class Keymapping;
struct DuplicateKey;
// clang-format on

class RemappingLayout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Keymapping>> mKeymappings;
    ::ll::TypedStorage<8, 24, ::std::vector<::Keymapping>> mDefaultMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RemappingLayout() = default;
#else // LL_PLAT_C
    virtual ~RemappingLayout();
#endif

    virtual void setMappingWithRawInput(::std::string const&, int, ::RawInputType);

    virtual int getAdjustedKey(int key) const;

    virtual ::std::string getSaveString(::std::string const& action) const;

    virtual ::std::string getMappedKeyName(int key) const;

    virtual ::std::string getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    virtual ::std::string getMappedKeyName(::Keymapping const& keyMapping) const;

    virtual ::std::string getKeySpriteLocation(int key, ::IconSize iconSize) const;

    virtual ::std::string getKeySpriteLocation(::Keymapping const& keyMapping) const;

    virtual int _rawKeyToKey(int, ::RawInputType) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void assignDefaultMapping(::std::vector<::Keymapping>&& newDefaultMapping);

    MCAPI_C ::Keymapping const& getKeymappingByAction(::std::string const& action) const;

    MCAPI_C void setMapping(::std::string const& action, ::std::vector<int> const& keys);

    MCAPI_C void unassignDuplicateKeys(int index);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::vector<::DuplicateKey>
    _generateIndicesOfDuplicatesForMappings(::std::vector<::Keymapping> const& mappings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD int $getAdjustedKey(int key) const;

    MCFOLD ::std::string $getSaveString(::std::string const& action) const;

    MCFOLD ::std::string $getMappedKeyName(int key) const;

    MCFOLD ::std::string $getMappedKeyName(int key, bool checkUserConfiguredSwap) const;

    MCAPI ::std::string $getMappedKeyName(::Keymapping const& keyMapping) const;

    MCFOLD ::std::string $getKeySpriteLocation(int key, ::IconSize iconSize) const;

    MCAPI ::std::string $getKeySpriteLocation(::Keymapping const& keyMapping) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
