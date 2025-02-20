#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/platform/threading/SharedLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
namespace Bedrock::Threading { class SharedRecursiveMutex; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class DataStore : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DataStore inner types declare
    // clang-format off
    template<typename T0, typename T1> class AccessHandle;
    struct CustomFileHandlers;
    class Editor;
    class Impl;
    class Viewer;
    // clang-format on

    // DataStore inner types define
    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk36485c;
        ::ll::UntypedStorage<8, 40> mUnk7c4cd3;
        ::ll::UntypedStorage<8, 32> mUnka16edc;
        ::ll::UntypedStorage<8, 24> mUnkbf5d9d;
        ::ll::UntypedStorage<8, 88> mUnka2b527;
        ::ll::UntypedStorage<8, 8>  mUnkb96eba;
        ::ll::UntypedStorage<8, 24> mUnk6aa7f3;
        ::ll::UntypedStorage<8, 16> mUnk431661;
        ::ll::UntypedStorage<8, 24> mUnk71a5a1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ::Bedrock::JSONObject::Node*
        _setValueForKey(char const* key, uint64 keyLength, ::Bedrock::JSONObject::ValueWrapper const& value);

        MCAPI void load();

        MCAPI ~Impl();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Viewer() = default;

        // vIndex: 2
        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const = 0;

        // vIndex: 1
        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() = 0;

        // vIndex: 3
        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view) const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    class Editor : public ::Bedrock::DataStore::Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 4
        virtual ::Bedrock::JSONObject::Node* getValueForKey(::std::string_view) = 0;

        // vIndex: 5
        virtual ::Bedrock::JSONObject::Node*
        setValueForKey(::std::string_view, ::Bedrock::JSONObject::ValueWrapper const&) = 0;

        // vIndex: 0
        virtual ~Editor() /*override*/ = default;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct CustomFileHandlers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnka2167c;
        ::ll::UntypedStorage<8, 8> mUnkafbedc;
        ::ll::UntypedStorage<8, 8> mUnkf5b462;
        // NOLINTEND

    public:
        // prevent constructor by default
        CustomFileHandlers& operator=(CustomFileHandlers const&);
        CustomFileHandlers(CustomFileHandlers const&);
        CustomFileHandlers();
    };

    template <typename T0, typename T1>
    class AccessHandle {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb118aa;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStore& operator=(DataStore const&);
    DataStore(DataStore const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataStore() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataStore();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
