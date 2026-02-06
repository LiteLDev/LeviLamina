#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct EDULibraryCategory;
// clang-format on

struct EDULibraryCategoryParser {
public:
    // EDULibraryCategoryParser inner types define
    enum class CategoryType : int {};

    using SubCategoryCallback = ::std::function<void(
        ::std::shared_ptr<::MainMenuScreenModel>,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        int,
        ::std::vector<::std::string> const&,
        bool
    )>;

    using WorldsCallback = ::std::function<void(
        ::std::shared_ptr<::MainMenuScreenModel>,
        ::std::string const&,
        ::std::string const&,
        ::std::string const&,
        ::std::vector<::std::string> const&,
        ::std::string const&
    )>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void getCategories(
        ::std::unordered_map<::std::string, ::EDULibraryCategory>& returnRef,
        ::std::string const&                                       jsonString,
        ::std::function<void(
            ::std::shared_ptr<::MainMenuScreenModel>,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            int,
            ::std::vector<::std::string> const&,
            bool
        )>                                                         subCategoryCallback,
        ::std::function<void(
            ::std::shared_ptr<::MainMenuScreenModel>,
            ::std::string const&,
            ::std::string const&,
            ::std::string const&,
            ::std::vector<::std::string> const&,
            ::std::string const&
        )>                                                         worldsCallback
    );
    // NOLINTEND
};
