require "test/unit"
require "stree"

class TestStree < Test::Unit::TestCase
  def test_bye
    assert "Good bye", Stree.bye
  end
end