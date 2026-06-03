#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/BPlusTree.h"
#include "mc/deps/raknet/data_structures/List.h"

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

    enum class SortQueryType : int {
        IncreasingOrder = 0,
        DecreasingOrder = 1,
    };

    struct Cell {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>   isEmpty;
        ::ll::TypedStorage<8, 8, double> i;
        ::ll::TypedStorage<8, 8, char*>  c;
        ::ll::TypedStorage<8, 8, void*>  ptr;
        // NOLINTEND
    };

    struct ColumnDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 64, char[64]>                           columnName;
        ::ll::TypedStorage<4, 4, ::DataStructures::Table::ColumnType> columnType;
        // NOLINTEND
    };

    struct FilterQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 64, char[64]>                                columnName;
        ::ll::TypedStorage<4, 4, uint>                                     columnIndex;
        ::ll::TypedStorage<8, 8, ::DataStructures::Table::Cell*>           cellValue;
        ::ll::TypedStorage<4, 4, ::DataStructures::Table::FilterQueryType> operation;
        // NOLINTEND
    };

    struct Row {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::DataStructures::Table::Cell*>> cells;
        // NOLINTEND
    };

    struct SortQuery {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                   columnIndex;
        ::ll::TypedStorage<4, 4, ::DataStructures::Table::SortQueryType> operation;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::DataStructures::BPlusTree<uint, ::DataStructures::Table::Row*, 16>> rows;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::DataStructures::Table::ColumnDescriptor>>    columns;
    // NOLINTEND
};

} // namespace DataStructures
