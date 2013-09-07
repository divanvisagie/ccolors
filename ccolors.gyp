{
  'targets' : [
    { 
      'target_name' : 'test',
      'type' : 'executable',
      'sources' : [
        '<!@(find *.c)',
        '<!@(find *.h)'
      ],
      'include_dirs' : [
      ],
      'libraries' : [
      ],
      'conditions' : [
        ['OS=="mac"', {

          'xcode_settings': {
            'ARCHS': '$(ARCHS_STANDARD_64_BIT)'
          },

          'link_settings': {
            'libraries': [
            ],
          },

        }]
      ]
    }
  ]
}