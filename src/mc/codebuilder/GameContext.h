#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class GameContext {
public:
    // GameContext inner types declare
    // clang-format off
    struct ItemTypeList;
    struct ObjectTypeList;
    // clang-format on

    // GameContext inner types define
    struct ItemTypeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk99ac7c;
        ::ll::UntypedStorage<8, 64> mUnk8dc5cd;
        ::ll::UntypedStorage<8, 24> mUnk9844ff;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemTypeList& operator=(ItemTypeList const&);
        ItemTypeList(ItemTypeList const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ItemTypeList();

        MCNAPI ~ItemTypeList();
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
    };

    struct ObjectTypeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk47fc85;
        ::ll::UntypedStorage<8, 64> mUnkac1051;
        ::ll::UntypedStorage<8, 24> mUnk7b2de4;
        // NOLINTEND

    public:
        // prevent constructor by default
        ObjectTypeList& operator=(ObjectTypeList const&);
        ObjectTypeList(ObjectTypeList const&);
        ObjectTypeList();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ObjectTypeList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkec8ea4;
    ::ll::UntypedStorage<8, 152> mUnk55791e;
    ::ll::UntypedStorage<8, 152> mUnka2ed89;
    ::ll::UntypedStorage<8, 64>  mUnk8ef71e;
    ::ll::UntypedStorage<8, 64>  mUnkfd6f86;
    // NOLINTEND

public:
    // prevent constructor by default
    GameContext& operator=(GameContext const&);
    GameContext(GameContext const&);
    GameContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameContext(
        ::std::unordered_map<::std::string, ::std::vector<::std::string>> mobs,
        ::CodeBuilder::GameContext::ObjectTypeList                        blocks,
        ::CodeBuilder::GameContext::ItemTypeList                          items,
        ::std::function<::ILevel*()>                                      levelGetter
    );

    MCNAPI ::Json::Value blocksToJson() const;

    MCNAPI ::Json::Value getFilepathJson(::std::string const& filePath) const;

    MCNAPI ::Json::Value getTutorialJson(::std::string const& tutorialPath) const;

    MCNAPI ::Json::Value itemsToJson() const;

    MCNAPI ::Json::Value mobsToJson() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::CodeBuilder::GameContext> create(::std::function<::ILevel*()> levelGetter);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unordered_map<::std::string, ::std::vector<::std::string>> mobs,
        ::CodeBuilder::GameContext::ObjectTypeList                        blocks,
        ::CodeBuilder::GameContext::ItemTypeList                          items,
        ::std::function<::ILevel*()>                                      levelGetter
    );
    // NOLINTEND
};

} // namespace CodeBuilder
