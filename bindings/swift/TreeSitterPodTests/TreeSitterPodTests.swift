import XCTest
import SwiftTreeSitter
import TreeSitterPod

final class TreeSitterPodTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_pod())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Pod grammar")
    }
}
