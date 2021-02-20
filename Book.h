//
// Created by Jairo Riaño on 20/02/21.
//

#ifndef LINKDOUBLE_BOOK_H
#define LINKDOUBLE_BOOK_H

#include <string>
#include <ostream>

class Book {
public:
    Book();

    Book(const std::string &issn, const std::string &title, const std::string &author, int pages, int year);

    const std::string &getIssn() const;

    void setIssn(const std::string &issn);

    const std::string &getTitle() const;

    void setTitle(const std::string &title);

    const std::string &getAuthor() const;

    void setAuthor(const std::string &author);

    int getPages() const;

    void setPages(int pages);

    int getYear() const;

    void setYear(int year);

    friend std::ostream &operator<<(std::ostream &os, const Book &book);

    virtual ~Book();

private:
    std::string issn;
    std::string title;
    std::string author;
    int pages;
    int year;
};


#endif //LINKDOUBLE_BOOK_H
