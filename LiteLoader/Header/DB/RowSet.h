#pragma once
#include "Row.h"
#include <vector>

namespace DB
{

class RowSet : public std::vector<Row>
{
public:
    RowHeader& header; //!< The header of the rows(references, to avoid copying)

    /**
     * @brief Construct a new Row Set object
     * 
     * @param header The header(column names) of rows(references)
     */
    LIAPI RowSet(RowHeader& header);
    /**
     * @brief Construct a new Row Set object with provided rows
     * 
     * @param rows   Vector of rows
     * @param header The header(column names) of rows(references)
     */
    LIAPI RowSet(const std::vector<Row>& rows, RowHeader& header);
    /**
     * @brief Construct a new Row Set object with provided rows(move)
     * 
     * @param rows   Vector of rows(rvalue)
     * @param header The header(column names) of rows(references)
     */
    LIAPI RowSet(std::vector<Row>&& rows, RowHeader& header);
    /// Move constructor
    LIAPI RowSet(RowSet&& set);
    /// Copy constructor
    LIAPI RowSet(const RowSet& set);
    /// Move assignment operator
    LIAPI RowSet& operator=(RowSet&& set);
    /// Copy assignment operator
    LIAPI RowSet& operator=(const RowSet& set);
};

using ResultSet = RowSet;

} // namespace DB