//
// Created by Jairo Riaño on 20/02/21.
//

#include "Book.h"

Book::Book() {}

Book::Book(const std::string &issn, const std::string &title, const std::string &author, int pages, int year) : issn(
        issn), title(title), author(author), pages(pages), year(year) {}

const std::string &Book::getIssn() const {
    return issn;
}

void Book::setIssn(const std::string &issn) {
    Book::issn = issn;
}

const std::string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const std::string &title) {
    Book::title = title;
}

const std::string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const std::string &author) {
    Book::author = author;
}

int Book::getPages() const {
    return pages;
}

void Book::setPages(int pages) {
    Book::pages = pages;
}

int Book::getYear() const {
    return year;
}

void Book::setYear(int year) {
    Book::year = year;
}

std::ostream &operator<<(std::ostream &os, const Book &book) {
    os << "issn: " << book.issn << " title: " << book.title << " author: " << book.author << " pages: " << book.pages
       << " year: " << book.year;
    return os;
}

Book::~Book() {

}