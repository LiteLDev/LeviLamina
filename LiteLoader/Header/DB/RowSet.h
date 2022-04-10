#pragma once
#include "Row.h"
#include <vector>

#undef max

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

    /**
     * @brief Print the result set to the stream.
     *
     * @tparam T      The stream type
     * @param  stream The output stream
     * @par Output sample
     * @code
     * | a   | b      |
     * |=====|========|
     * | awa | 114514 |
     * | qwq | 233    |
     * | ll  | <NULL> |
     * |=====|========|
     * @endcode
     */
    template <typename T>
    inline void print(T&& stream = std::cout)
    {
        std::vector<size_t> colWidths;
        for (size_t i = 0; i < header.size(); ++i)
            colWidths.push_back(header[i].size());
        for (auto& row : *this)
        {
            for (size_t i = 0; i < row.size(); ++i)
            {
                auto& val = row[i];
                if (val.is_null())
                {
                    colWidths[i] = sizeof("<NULL>") - 1;
                }
                colWidths[i] = std::max(val.get<std::string>().size(), colWidths[i]);
            }
        }
        stream << "| ";
        for (size_t i = 0; i < header.size(); ++i)
        {
            stream << std::setw(colWidths[i]) << std::left << header[i];
            if (i != header.size() - 1)
                stream << " | ";
            else
                stream << " |";
        }
        stream << std::endl
               << "|=";
        for (size_t i = 0; i < colWidths.size(); ++i)
        {
            for (size_t j = 0; j < colWidths[i]; ++j)
                stream << '=';
            if (i != colWidths.size() - 1)
                stream << "=|=";
            else
                stream << "=|";
        }
        stream << std::endl;
        for (auto& row : *this)
        {
            stream << "| ";
            for (size_t i = 0; i < row.size(); ++i)
            {
                if (row[i].is_null())
                    stream << std::setw(colWidths[i]) << std::left << "<NULL>";
                else
                    stream << std::setw(colWidths[i]) << std::left << row[i].get<std::string>();
                if (i != row.size() - 1)
                    stream << " | ";
                else
                    stream << " |";
            }
            stream << std::endl;
        }
        stream << "|=";
        for (size_t i = 0; i < colWidths.size(); ++i)
        {
            for (size_t j = 0; j < colWidths[i]; ++j)
                stream << '=';
            if (i != colWidths.size() - 1)
                stream << "=|=";
            else
                stream << "=|";
        }
    }
};

using ResultSet = RowSet;

} // namespace DB