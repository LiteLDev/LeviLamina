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
    class PerfContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk3a6c7c;
        ::ll::UntypedStorage<8, 8>  mUnk5e72ec;
        ::ll::UntypedStorage<8, 32> mUnk87e063;
        ::ll::UntypedStorage<8, 8>  mUnk530951;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerfContext& operator=(PerfContext const&);
        PerfContext(PerfContext const&);
        PerfContext();
    };

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
        MCNAPI ~BatchEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using BatchContainerType = ::std::map<::std::string, ::LevelStorageWriteBatch::BatchEntry>;

    using iterator = ::std::_Tree_iterator<::std::_Tree_val<
        ::std::_Tree_simple_types<::std::pair<::std::string const, ::LevelStorageWriteBatch::BatchEntry>>>>;

    using const_iterator = ::std::_Tree_const_iterator<::std::_Tree_val<
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelStorageWriteBatch();

    // vIndex: 4
    virtual void putKey(::std::string const& key, ::std::string_view data, ::DBHelpers::Category category);

    // vIndex: 3
    virtual void putKey(::std::string const& key, ::std::string const& data, ::DBHelpers::Category category);

    // vIndex: 2
    virtual void putKey(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    // vIndex: 1
    virtual void
    putKey(::std::string const& key, ::std::shared_ptr<::std::string> data, ::DBHelpers::Category category);

    // vIndex: 5
    virtual void deleteKey(::std::string const& key, ::DBHelpers::Category category);

    // vIndex: 6
    virtual void flush(::LevelStorage& db);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LevelStorageWriteBatch(::LevelStorageWriteBatch&& rhs);

    MCNAPI void clear();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelStorageWriteBatch&& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $putKey(::std::string const& key, ::std::string_view data, ::DBHelpers::Category category);

    MCNAPI void $putKey(::std::string const& key, ::std::string const& data, ::DBHelpers::Category category);

    MCNAPI void $putKey(::std::string const& key, ::std::string&& data, ::DBHelpers::Category category);

    MCNAPI void
    $putKey(::std::string const& key, ::std::shared_ptr<::std::string> data, ::DBHelpers::Category category);

    MCNAPI void $deleteKey(::std::string const& key, ::DBHelpers::Category category);

    MCNAPI void $flush(::LevelStorage& db);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
