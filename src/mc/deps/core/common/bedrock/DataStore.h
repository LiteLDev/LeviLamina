#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class DataStore {
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
        CustomFileHandlers& operator=(CustomFileHandlers const&) = delete;
        CustomFileHandlers(CustomFileHandlers const&)            = delete;
        CustomFileHandlers()                                     = delete;

    public:
        /**
         * @symbol ??4CustomFileHandlers\@DataStore\@Bedrock\@\@QEAAAEAU012\@$$QEAU012\@\@Z
         */
        MCAPI struct Bedrock::DataStore::CustomFileHandlers&
        operator=(struct Bedrock::DataStore::CustomFileHandlers&&); // NOLINT
        /**
         * @symbol ??1CustomFileHandlers\@DataStore\@Bedrock\@\@QEAA\@XZ
         */
        MCAPI ~CustomFileHandlers(); // NOLINT
    };

    class EditorImpl {

    public:
        // prevent constructor by default
        EditorImpl& operator=(EditorImpl const&) = delete;
        EditorImpl(EditorImpl const&)            = delete;
        EditorImpl()                             = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol
         * ?getOwningDataStore\@EditorImpl\@DataStore\@Bedrock\@\@UEBA?AV?$not_null\@PEBVDataStore\@Bedrock\@\@\@gsl\@\@XZ
         */
        virtual class gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const; // NOLINT
        /**
         * @vftbl 2
         * @symbol
         * ?getOwningDataStore\@EditorImpl\@DataStore\@Bedrock\@\@UEAA?AV?$not_null\@PEAVDataStore\@Bedrock\@\@\@gsl\@\@XZ
         */
        virtual class gsl::not_null<class Bedrock::DataStore*> getOwningDataStore(); // NOLINT
        /**
         * @vftbl 3
         * @symbol
         * ?getValueForKey\@EditorImpl\@DataStore\@Bedrock\@\@UEAAPEAVNode\@JSONObject\@3\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
         */
        virtual class Bedrock::JSONObject::Node*
            getValueForKey(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
        /**
         * @vftbl 4
         * @symbol
         * ?getValueForKey\@EditorImpl\@DataStore\@Bedrock\@\@UEBAPEBVNode\@JSONObject\@3\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
         */
        virtual class Bedrock::JSONObject::Node const*
            getValueForKey(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
        /**
         * @vftbl 5
         * @symbol
         * ?setValueForKey\@EditorImpl\@DataStore\@Bedrock\@\@UEAAPEAVNode\@JSONObject\@3\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVValueWrapper\@53\@\@Z
         */
        virtual class Bedrock::JSONObject::Node*
        setValueForKey(class std::basic_string_view<char, struct std::char_traits<char>>, class Bedrock::JSONObject::ValueWrapper const&); // NOLINT
    };

    class Impl {

    public:
        // prevent constructor by default
        Impl& operator=(Impl const&) = delete;
        Impl(Impl const&)            = delete;
        Impl()                       = delete;

    public:
        /**
         * @symbol ??0Impl\@DataStore\@Bedrock\@\@QEAA\@PEAV12\@\@Z
         */
        MCAPI Impl(class Bedrock::DataStore*); // NOLINT
        /**
         * @symbol ?load\@Impl\@DataStore\@Bedrock\@\@QEAAXXZ
         */
        MCAPI void load(); // NOLINT
    };

    class Viewer {

    public:
        // prevent constructor by default
        Viewer& operator=(Viewer const&) = delete;
        Viewer(Viewer const&)            = delete;
        Viewer()                         = delete;
    };

    class ViewerImpl {

    public:
        // prevent constructor by default
        ViewerImpl& operator=(ViewerImpl const&) = delete;
        ViewerImpl(ViewerImpl const&)            = delete;
        ViewerImpl()                             = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
        /**
         * @vftbl 1
         * @symbol
         * ?getOwningDataStore\@ViewerImpl\@DataStore\@Bedrock\@\@UEBA?AV?$not_null\@PEBVDataStore\@Bedrock\@\@\@gsl\@\@XZ
         */
        virtual class gsl::not_null<class Bedrock::DataStore const*> getOwningDataStore() const; // NOLINT
        /**
         * @vftbl 2
         * @symbol
         * ?getOwningDataStore\@ViewerImpl\@DataStore\@Bedrock\@\@UEAA?AV?$not_null\@PEAVDataStore\@Bedrock\@\@\@gsl\@\@XZ
         */
        virtual class gsl::not_null<class Bedrock::DataStore*> getOwningDataStore(); // NOLINT
        /**
         * @vftbl 3
         * @symbol
         * ?getValueForKey\@ViewerImpl\@DataStore\@Bedrock\@\@UEBAPEBVNode\@JSONObject\@3\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
         */
        virtual class Bedrock::JSONObject::Node const*
            getValueForKey(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    };

public:
    // prevent constructor by default
    DataStore& operator=(DataStore const&) = delete;
    DataStore(DataStore const&)            = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_DATASTORE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DataStore(); // NOLINT
#endif
    /**
     * @symbol ??0DataStore\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI DataStore(); // NOLINT
    /**
     * @symbol ?load\@DataStore\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void load(); // NOLINT
    /**
     * @symbol ?setCustomFileHandlers\@DataStore\@Bedrock\@\@QEAAXUCustomFileHandlers\@12\@\@Z
     */
    MCAPI void setCustomFileHandlers(struct Bedrock::DataStore::CustomFileHandlers); // NOLINT
    /**
     * @symbol ?setFilePath\@DataStore\@Bedrock\@\@QEAAXAEBVPath\@Core\@\@\@Z
     */
    MCAPI void setFilePath(class Core::Path const&); // NOLINT
};

}; // namespace Bedrock
