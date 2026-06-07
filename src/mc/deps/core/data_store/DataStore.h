#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/copyable_function.h"
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
    struct CustomFileHandlers;
    class Viewer;
    template<typename T0, typename T1> class AccessHandle;
    class Editor;
    class EditorImpl;
    class Impl;
    class ViewerImpl;
    // clang-format on

    // DataStore inner types define
    struct CustomFileHandlers {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk28b7e8;
        ::ll::UntypedStorage<8, 64> mUnk8d9397;
        ::ll::UntypedStorage<8, 64> mUnk216882;
        // NOLINTEND

    public:
        // prevent constructor by default
        CustomFileHandlers& operator=(CustomFileHandlers const&);
        CustomFileHandlers(CustomFileHandlers const&);
        CustomFileHandlers();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CustomFileHandlers();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Viewer() = default;

        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const = 0;

        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() = 0;

        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view key) const = 0;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI bool getBooleanKey(::std::string_view key, bool defaultValue) const;

        MCNAPI int getSInt32Key(::std::string_view key, int defaultValue) const;
#endif
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    template <typename T0, typename T1>
    class AccessHandle {};

    class Editor : public ::Bedrock::DataStore::Viewer {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::Bedrock::JSONObject::Node* getValueForKey(::std::string_view key) = 0;

        virtual ::Bedrock::JSONObject::Node*
        setValueForKey(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value) = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class EditorImpl : public ::Bedrock::DataStore::Editor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkeff452;
        ::ll::UntypedStorage<1, 1> mUnke53327;
        // NOLINTEND

    public:
        // prevent constructor by default
        EditorImpl& operator=(EditorImpl const&);
        EditorImpl(EditorImpl const&);
        EditorImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~EditorImpl() /*override*/ = default;

        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const /*override*/;

        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() /*override*/;

        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view key) const /*override*/;

        virtual ::Bedrock::JSONObject::Node* getValueForKey(::std::string_view key) /*override*/;

        virtual ::Bedrock::JSONObject::Node*
        setValueForKey(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value) /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Bedrock::DataStore const*> $getOwningDataStore() const;

        MCNAPI ::gsl::not_null<::Bedrock::DataStore*> $getOwningDataStore();

        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(::std::string_view key) const;

        MCNAPI ::Bedrock::JSONObject::Node* $getValueForKey(::std::string_view key);

        MCNAPI ::Bedrock::JSONObject::Node*
        $setValueForKey(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value);


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk36485c;
        ::ll::UntypedStorage<8, 40>  mUnk7c4cd3;
        ::ll::UntypedStorage<8, 32>  mUnk5d9472;
        ::ll::UntypedStorage<8, 192> mUnkbf5d9d;
        ::ll::UntypedStorage<8, 88>  mUnka2b527;
        ::ll::UntypedStorage<8, 8>   mUnkb96eba;
        ::ll::UntypedStorage<8, 24>  mUnk6aa7f3;
        ::ll::UntypedStorage<8, 16>  mUnk431661;
        ::ll::UntypedStorage<8, 24>  mUnk71a5a1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit Impl(::Bedrock::DataStore* owner);

        MCNAPI ::Bedrock::JSONObject::Node* _getValueForKey(char const* key, uint64 keyLength);

        MCNAPI ::Bedrock::JSONObject::Node*
        _setValueForKey(char const* key, uint64 keyLength, ::Bedrock::JSONObject::ValueWrapper const& value);

        MCNAPI void load();

#ifdef LL_PLAT_C
        MCNAPI void save();
#endif

        MCNAPI void setCustomFileHandlers(::Bedrock::DataStore::CustomFileHandlers handlers);

        MCNAPI ~Impl();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Bedrock::DataStore* owner);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class ViewerImpl : public ::Bedrock::DataStore::Viewer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk42e070;
        // NOLINTEND

    public:
        // prevent constructor by default
        ViewerImpl& operator=(ViewerImpl const&);
        ViewerImpl(ViewerImpl const&);
        ViewerImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::gsl::not_null<::Bedrock::DataStore const*> getOwningDataStore() const /*override*/;

        virtual ::gsl::not_null<::Bedrock::DataStore*> getOwningDataStore() /*override*/;

        virtual ::Bedrock::JSONObject::Node const* getValueForKey(::std::string_view key) const /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::gsl::not_null<::Bedrock::DataStore const*> $getOwningDataStore() const;

        MCNAPI ::gsl::not_null<::Bedrock::DataStore*> $getOwningDataStore();

        MCNAPI ::Bedrock::JSONObject::Node const* $getValueForKey(::std::string_view key) const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk837080;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStore& operator=(DataStore const&);
    DataStore(DataStore const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStore() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStore();

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::DataStore::AccessHandle<::Bedrock::DataStore::Editor, ::Bedrock::DataStore::EditorImpl> edit();
#endif

    MCNAPI void load();

#ifdef LL_PLAT_C
    MCNAPI void save();
#endif

    MCNAPI void setCustomFileHandlers(::Bedrock::DataStore::CustomFileHandlers handlers);

    MCNAPI void setFilePath(::Core::Path const& filePath);

#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::DataStore::AccessHandle<::Bedrock::DataStore::Viewer, ::Bedrock::DataStore::ViewerImpl> view();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
