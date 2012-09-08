# -*- ruby -*-

require 'rubygems'
require 'hoe'
require 'rake/extensiontask'
# Hoe.plugin :compiler
# Hoe.plugin :gem_prelude_sucks
# Hoe.plugin :inline
# Hoe.plugin :racc
# Hoe.plugin :rcov
# Hoe.plugin :rubyforge

Hoe.spec 'stree' do
  # HEY! If you fill these out in ~/.hoe_template/Rakefile.erb then
  # you'll never have to touch them again!
  # (delete this comment too, of course)

  developer('dgtm', 'example@example.com')
  self.extra_dev_deps << ['rake-compiler', '>=0']

  # When someone installs our gem, this line tells the gem command to execute the "ext/stree/extconf.rb" file
  self.spec_extras = {extensions: ['ext/stree/extconf.rb']}
  
  Rake::ExtensionTask.new('stree',spec) do |ext|
  	ext.lib_dir = File.join('lib','stree')
  end
  # self.rubyforge_name = 'streex' # if different than 'stree'
end

#Always compile the extension before test
Rake::Task[:test].prerequisites << :compile


# vim: syntax=ruby
