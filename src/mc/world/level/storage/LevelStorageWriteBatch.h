#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/storage/db_helpers/Category.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class LevelStorageWriteBatch {
public:
    // LevelStorageWriteBatch inner types declare
    // clang-format off
    struct BatchEntry;
    class PerfContext;
    // clang-format on

    // LevelStorageWriteBatch inner types define
    struct BatchEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::std::string>> mLatestValue;
        ::ll::TypedStorage<1, 1, bool>                              mDeleted;
        ::ll::TypedStorage<4, 4, ::DBHelpers::Category>             mCategory;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~BatchEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    class PerfContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>         mOperation;
        ::ll::TypedStorage<8, 8, uint64>         mSize;
        ::ll::TypedStorage<8, 32, ::std::string> mKey;
        ::ll::TypedStorage<8, 8, char const*>    mReason;
        // NOLINTEND
    };

    using BatchContainerType = ::std::map<::std::string, ::LevelStorageWriteBatch::BatchEntry>;

    using const_iterator = ::std::_Tree_const_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<::std::string const, ::LevelStorageWriteBatch::BatchEntry>>>>;

    using iterator = ::std::_Tree_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<::std::string const, ::LevelStorageWriteBatch::BatchEntry>>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>                          mFlushCallbacks;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::LevelStorageWriteBatch::BatchEntry>> mBatch;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                     mFlushCallbacksMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelStorageWriteBatch& operator=(LevelStorageWriteBatch const&);
    LevelStorageWriteBatch(LevelStorageWriteBatch const&);
    LevelStorageWriteBatch();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelStorageWriteBatch();

    virtual void putKey(::std::string const& key, ::std::string_view data, ::DBHelpers::Category category);

    virtual void putKey(::std::string const& key, ::std::string const& data, ::DBHelpers::Category category);

    virtual void putKey(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    virtual void
    putKey(::std::string const& key, ::std::shared_ptr<::std::string> data, ::DBHelpers::Category category);

    virtual void deleteKey(::std::string const& key, ::DBHelpers::Category category);

    virtual void flush(::LevelStorage& db);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelStorageWriteBatch(::LevelStorageWriteBatch&& rhs);

    MCAPI void clear();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelStorageWriteBatch&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $putKey(::std::string const& key, ::std::string_view data, ::DBHelpers::Category category);

    MCAPI void $putKey(::std::string const& key, ::std::string const& data, ::DBHelpers::Category category);

    MCAPI void $putKey(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCAPI void $putKey(::std::string const& key, ::std::shared_ptr<::std::string> data, ::DBHelpers::Category category);

    MCAPI void $deleteKey(::std::string const& key, ::DBHelpers::Category category);

    MCAPI void $flush(::LevelStorage& db);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
