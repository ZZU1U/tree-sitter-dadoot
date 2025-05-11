import XCTest
import SwiftTreeSitter
import TreeSitterDadoot

final class TreeSitterDadootTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dadoot())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading DaDoot grammar")
    }
}
