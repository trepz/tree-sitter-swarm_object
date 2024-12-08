import XCTest
import SwiftTreeSitter
import TreeSitterSwarmObject

final class TreeSitterSwarmObjectTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_swarm_object())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading SwarmObject grammar")
    }
}
