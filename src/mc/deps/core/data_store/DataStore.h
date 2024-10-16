#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class DataStore : public ::Bedrock::EnableNonOwnerReferences {
public:
    // DataStore inner types declare
    // clang-format off
    struct CustomFileHandlers;
    class EditorImpl;
    class Impl;
    class Viewer;
    class ViewerImpl;
    // clang-format on

    // DataStore inner types define
    struct CustomFileHandlers {
    public:
        // prevent constructor by default
        CustomFileHandlers& operator=(CustomFileHandlers const&);
        CustomFileHandlers(CustomFileHandlers const&);
        CustomFileHandlers();

    public:
        // NOLINTBEGIN
        MCAPI struct Bedrock::DataStore::CustomFileHandlers& operator=(struct Bedrock::DataStore::CustomFileHandlers&&);

        MCAPI ~CustomFileHandlers();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

    class EditorImpl {
    public:
        // prevent constructor by default
        EditorImpl& operator=(EditorImpl const&);
        EditorImpl(EditorImpl const&);
        EditorImpl();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~EditorImpl() = default;

        // vIndex: 1
        virtual gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const;

        // vIndex: 2
        virtual gsl::not_null<class Bedrock::DataStore*> getOwningDataStore();

        // vIndex: 3
        virtual class Bedrock::JSONObject::Node* getValueForKey(std::string_view key);

        // vIndex: 4
        virtual class Bedrock::JSONObject::Node const* getValueForKey(std::string_view key) const;

        // vIndex: 5
        virtual class Bedrock::JSONObject::Node*
        setValueForKey(std::string_view key, class Bedrock::JSONObject::ValueWrapper const& value);

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        MCAPI gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore$() const;

        MCAPI gsl::not_null<class Bedrock::DataStore*> getOwningDataStore$();

        MCAPI class Bedrock::JSONObject::Node* getValueForKey$(std::string_view key);

        MCAPI class Bedrock::JSONObject::Node const* getValueForKey$(std::string_view key) const;

        MCAPI class Bedrock::JSONObject::Node*
        setValueForKey$(std::string_view key, class Bedrock::JSONObject::ValueWrapper const& value);

        // NOLINTEND
    };

    class Impl {
    public:
        // prevent constructor by default
        Impl& operator=(Impl const&);
        Impl(Impl const&);
        Impl();

    public:
        // NOLINTBEGIN
        MCAPI explicit Impl(class Bedrock::DataStore* owner);

        MCAPI void load();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(class Bedrock::DataStore* owner);

        // NOLINTEND
    };

    class Viewer {
    public:
        // prevent constructor by default
        Viewer& operator=(Viewer const&);
        Viewer(Viewer const&);
        Viewer();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Viewer() = default;

        // vIndex: 1
        virtual gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const = 0;

        // vIndex: 2
        virtual gsl::not_null<class Bedrock::DataStore*> getOwningDataStore() = 0;

        // vIndex: 3
        virtual class Bedrock::JSONObject::Node const* getValueForKey(std::string_view key) const = 0;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        // NOLINTEND
    };

    class ViewerImpl : public ::Bedrock::DataStore::Viewer {
    public:
        // prevent constructor by default
        ViewerImpl& operator=(ViewerImpl const&);
        ViewerImpl(ViewerImpl const&);
        ViewerImpl();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ViewerImpl() = default;

        // vIndex: 1
        virtual gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const;

        // vIndex: 2
        virtual gsl::not_null<class Bedrock::DataStore*> getOwningDataStore();

        // vIndex: 3
        virtual class Bedrock::JSONObject::Node const* getValueForKey(std::string_view key) const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** vftable();

        MCAPI gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore$() const;

        MCAPI gsl::not_null<class Bedrock::DataStore*> getOwningDataStore$();

        MCAPI class Bedrock::JSONObject::Node const* getValueForKey$(std::string_view key) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    DataStore& operator=(DataStore const&);
    DataStore(DataStore const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataStore();

    MCAPI DataStore();

    MCAPI void load();

    MCAPI void setCustomFileHandlers(struct Bedrock::DataStore::CustomFileHandlers handlers);

    MCAPI void setFilePath(class Core::Path const& filePath);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock
