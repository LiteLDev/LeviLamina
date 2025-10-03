#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace DataStructures {

class Table {
public:
    // Table inner types declare
    // clang-format off
    struct Cell;
    struct ColumnDescriptor;
    struct FilterQuery;
    struct Row;
    struct SortQuery;
    // clang-format on

    // Table inner types define
    enum class ColumnType : int {
        Numeric = 0,
        String  = 1,
        Binary  = 2,
        Pointer = 3,
    };

    struct Cell {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk40537c;
        ::ll::UntypedStorage<8, 8> mUnk6acced;
        ::ll::UntypedStorage<8, 8> mUnk89a942;
        ::ll::UntypedStorage<8, 8> mUnk45425d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Cell& operator=(Cell const&);
        Cell(Cell const&);
        Cell();
    };

    struct ColumnDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 64> mUnk4d8bdc;
        ::ll::UntypedStorage<4, 4>  mUnk512ac9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColumnDescriptor& operator=(ColumnDescriptor const&);
        ColumnDescriptor(ColumnDescriptor const&);
        ColumnDescriptor();
    };

    struct Row {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkc89e3e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Row& operator=(Row const&);
        Row(Row const&);
        Row();
    };

    enum class FilterQueryType : int {
        Equal         = 0,
        NotEqual      = 1,
        GreaterThan   = 2,
        GreaterThanEq = 3,
        LessThan      = 4,
        LessThanEq    = 5,
        IsEmpty       = 6,
        NotEmpty      = 7,
    };

    struct FilterQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 64> mUnka34b8a;
        ::ll::UntypedStorage<4, 4>  mUnk9ca462;
        ::ll::UntypedStorage<8, 8>  mUnk4fcb09;
        ::ll::UntypedStorage<4, 4>  mUnk40d112;
        // NOLINTEND

    public:
        // prevent constructor by default
        FilterQuery& operator=(FilterQuery const&);
        FilterQuery(FilterQuery const&);
        FilterQuery();
    };

    enum class SortQueryType : int {
        IncreasingOrder = 0,
        DecreasingOrder = 1,
    };

    struct SortQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka3c809;
        ::ll::UntypedStorage<4, 4> mUnk93de92;
        // NOLINTEND

    public:
        // prevent constructor by default
        SortQuery& operator=(SortQuery const&);
        SortQuery(SortQuery const&);
        SortQuery();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk4275ed;
    ::ll::UntypedStorage<8, 16> mUnkf4143b;
    // NOLINTEND

public:
    // prevent constructor by default
    Table& operator=(Table const&);
    Table(Table const&);
    Table();
};

} // namespace DataStructures
