#pragma once
#include "Any.h"
#include <unordered_map>
#include <vector>

namespace DB
{

/**
 * @brief The header of a row
 * 
 */
class RowHeader : public std::unordered_map<std::string, int>
{
public:
    /**
     * @brief Construct a new Row Header object
     * 
     */
    RowHeader() = default;
    /**
     * @brief Construct a new Row Header object
     * 
     * @param list An initializer list like `{"col1", "col2", "col3"}`
     */
    RowHeader(const std::initializer_list<std::string>& list);
    /**
     * @brief Add a column to the header
     * 
     * @param name The name of the column
     * @return int The index of the column
     */
    int add(const std::string& name);
    int& operator[](const std::string& name);
};

/**
 * @brief A row of data
 *
 */
class Row : public std::vector<Any>
{
public:
    RowHeader& header; //!< The header of the row(references, to avoid copying)

    Row() = default;
    /**
     * @brief Construct a new Row object.
     * 
     * @param list   List of values
     * @param header The header(column names) of the row(references)
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     * @par Example
     * @code
     * RowHeader header{"id", "age", "name"};
     * Row row({114, 2000, "alex"}, header);
     * @endcode
     */
    LIAPI Row(const std::initializer_list<Any>& list, RowHeader& header);
    /**
     * @brief Construct a new Row object(move).
     * 
     * @param list   Vector of values
     * @param header The header(column names) of the row(references)
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     */
    LIAPI Row(std::vector<Any>&& list, RowHeader& header);
    /**
     * @brief Construct a new Row object.
     * 
     * @param list   Vector of values
     * @param header The header(column names) of the row(references)
     * @throw std::invalid_argument If the size of the vector is not equal to the size of the header
     */
    LIAPI Row(const std::vector<Any>& list, RowHeader& header);
    /**
     * @brief Construct a new Row object.
     * 
     * @param list   List of column names(header) and values
     * @param header The header(column names) of the row(references)
     * @par Example
     * @code
     * RowHeader header; // Empty header
     * Row row({{"id", 114}, {"age", 2000}, {"name", "alex"}}, header);
     * // header will be filled with {"id", "age", "name"} after construction
     * @endcode
     */
    LIAPI Row(const std::initializer_list<std::pair<std::string, Any>>& list, RowHeader& header);
    /**
     * @brief Construct a new Row object(move).
     * 
     * @param list   Vector of column names(header) and values
     * @note MSVC with commandline parameter `/permissive` ONLY
     * @par Example
     * @code
     * Row row({{"id", 114}, {"age", 2000}, {"name", "alex"}});
     * @endcode
     */
    LIAPI Row(const std::initializer_list<std::pair<std::string, Any>>& list);
    /// Move constructor
    LIAPI Row(Row&& other) noexcept;
    /// Copy constructor
    LIAPI Row(const Row& other);
    /// Move assignment operator
    LIAPI Row& operator=(Row&& other) noexcept;
    /// Copy assignment operator
    LIAPI Row& operator=(const Row& other);
    /**
     * @brief Get the value of a column
     * 
     * @param column The name of the column
     * @return Any&  The value of the column
     * @note It will create a new Any object if the column doesn't exist
     */
    LIAPI Any& operator[](const std::string& column);
    /**
     * @brief Get the value of a column
     * 
     * @param column The name of the column
     * @return Any&  The value of the column
     * @throw std::out_of_range If the column does not exist
     */
    LIAPI Any& at(const std::string& column);
};

} // namespace DB